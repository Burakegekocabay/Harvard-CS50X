# Harward's CS50X Course BASIC C Project
Supposedly, Caesar (yes, that Caesar) used to “encrypt” (i.e., conceal in a reversible way) confidential messages by shifting each letter therein by some number of places. 
<p>Unencrypted text is generally called <em>plaintext</em>. Encrypted text is generally called <em>ciphertext</em>. And the secret used is called a <em>key</em>.</p>

<p>To be clear, then, here’s how encrypting <code class="language-plaintext highlighter-rouge">HELLO</code> with a key of 1 yields <code class="language-plaintext highlighter-rouge">IFMMP</code>:</p>

<table>
  <thead>
    <tr>
      <th>plaintext</th>
      <th><code class="language-plaintext highlighter-rouge">H</code></th>
      <th><code class="language-plaintext highlighter-rouge">E</code></th>
      <th><code class="language-plaintext highlighter-rouge">L</code></th>
      <th><code class="language-plaintext highlighter-rouge">L</code></th>
      <th><code class="language-plaintext highlighter-rouge">O</code></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>+ key</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
      <td>1</td>
    </tr>
    <tr>
      <td>= ciphertext</td>
      <td><code class="language-plaintext highlighter-rouge">I</code></td>
      <td><code class="language-plaintext highlighter-rouge">F</code></td>
      <td><code class="language-plaintext highlighter-rouge">M</code></td>
      <td><code class="language-plaintext highlighter-rouge">M</code></td>
      <td><code class="language-plaintext highlighter-rouge">P</code></td>
    </tr>
  </tbody>
</table>

 
<h3>Algorithm</h3> 
More formally, Caesar’s algorithm (i.e., cipher) encrypts messages by “rotating” each letter by (k) positions. More formally, if (p) is some plaintext , (p_i) is the i.th character in (p), and (k) is a secret key (i.e., a non-negative integer), then each letter, (c_i), in the ciphertext, (c), is computed as
<br> <br>
c_i = (p_i + k) % 26

 <h3> Output </h3> 
Enter a key: 1  <br>
Enter a word: HELLO <br>
RESULT : IFMMP
<br>


